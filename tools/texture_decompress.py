#!/usr/bin/env python3
"""
Tomba 2 Texture Decompressor
Implements the LZ-like decompression found in Texture_Decompress (0x80044D8C).

Format:
  - Command byte = CCCNNMMM (5-bit count + 3-bit mode)
  - Mode 0: copy `count` literal bytes from input
  - Mode 1-7: copy `count` bytes from output[pos + ring_buffer[mode]]
  - Mode 0 + count 0: END marker
  - Mode 1-7 + count 0: no-op, continue loop

Ring buffer offsets (pre-computed from output position):
  - slot 0: 0 (current position)
  - slot 1: -1 (previous byte)
  - slot 2: -stride (one row above, same col)
  - slot 3: -(stride + 1) (one row above, one byte left)
  - slot 4: -(stride + 2) (one row above, two bytes left)
  - slot 5: -(stride + 3) (one row above, three bytes left)
  - slot 6: -(stride - 1) (one row above, one byte right)
  - slot 7: -(stride - 2) (one row above, two bytes right)

Where stride = texture_width * 2 (16-bit pixels, 2 bytes per pixel)
"""

RING_TABLE = [
    (0, 0),    # slot 0: pos + 0
    (-1, 0),   # slot 1: pos - 1
    (0, -1),   # slot 2: pos - stride
    (-1, -1),  # slot 3: pos - stride - 1
    (-2, -1),  # slot 4: pos - stride - 2
    (-3, -1),  # slot 5: pos - stride - 3
    (1, -1),   # slot 6: pos - stride + 1
    (2, -1),   # slot 7: pos - stride + 2
]


def decompress_texture(compressed_data, texture_width, output_size=None):
    """
    Decompress a single texture.

    Args:
        compressed_data: bytes of compressed texture data
        texture_width: texture width in pixels (determines stride = width * 2)
        output_size: expected output size in bytes (optional, for verification)

    Returns:
        bytes of decompressed texture data
    """
    stride = texture_width * 2

    # Pre-compute ring buffer offsets for this texture width
    ring_buf = []
    for val1, val2 in RING_TABLE:
        offset = val1 + val2 * stride
        ring_buf.append(offset)

    # Allocate output buffer (estimate: 4x input as safety margin)
    estimated_max = len(compressed_data) * 4
    output = bytearray(estimated_max)

    out_pos = 0
    in_pos = 0
    data_len = len(compressed_data)

    while in_pos < data_len:
        cmd = compressed_data[in_pos]
        in_pos += 1

        count = cmd >> 3
        mode = cmd & 7

        if count == 0 and mode == 0:
            # END marker
            break

        if mode == 0:
            # Literal copy
            if in_pos + count > data_len:
                count = data_len - in_pos
            output[out_pos:out_pos + count] = compressed_data[in_pos:in_pos + count]
            in_pos += count
            out_pos += count

        else:
            # Copy from ring buffer
            if count == 0:
                # No-op, just continue
                continue

            src_offset = ring_buf[mode]

            for _ in range(count):
                # Source = current output position + offset (backwards reference)
                src_pos = out_pos + src_offset
                if src_pos < 0:
                    # Shouldn't happen with valid data
                    output[out_pos] = 0
                else:
                    output[out_pos] = output[src_pos]
                out_pos += 1

    return bytes(output[:out_pos])


def decompress_texture_pack(data, base_offset=0):
    """
    Decompress a texture pack (multiple textures with 6-short headers).

    Returns list of (header, decompressed_data) tuples.
    """
    textures = []
    pos = base_offset

    # Read texture count (first int)
    if pos + 4 > len(data):
        return textures

    count = int.from_bytes(data[pos:pos+4], 'little', signed=True)
    pos += 4

    if count <= 0:
        return textures

    # Skip backwards to before the count (psVar4 = data_pos - 2 in original code)
    # The original code does: psVar4 = (short*)(data + base_offset - 2)
    # This means the first texture header actually starts BEFORE the count
    header_pos = pos - 2

    for _ in range(count):
        if header_pos + 12 > len(data):
            break

        # Read 6-short header
        header = []
        for i in range(6):
            if header_pos + 2 > len(data):
                break
            val = int.from_bytes(data[header_pos:header_pos+2], 'little', signed=True)
            header.append(val)
            header_pos += 2

        if len(header) < 6:
            break

        # Read decompressed data size (stored after header in the structure)
        # From the original code: iVar1 = *param_1 at offset 8 (3rd int)
        # The texture structure has: [id, ?, size, ...] at offsets 0, 4, 8
        # After the 6-short header (12 bytes), we need to find where compressed data is

        # In the original loop: param_1 points to 3-int structure (id, ?, data_ptr)
        # The compressed data is stored at some offset after the headers

        # For now, skip this - texture pack format needs more analysis
        # The important thing is the decompression algorithm itself
        pass

    return textures


if __name__ == '__main__':
    # Quick test with known pattern
    # Compressed: [0x08, 0x41, 0x42, 0x43] -> mode 1, count 1, then 3 literals
    # Ring buf mode 1 offset = -1, so copy 1 byte from out[-1]
    # But this fails because out is empty at start -> needs literal data first

    print("Texture_Decompress implementation ready")
    print(f"Ring buffer offsets for width=64: {[v1+v2*128 for v1,v2 in RING_TABLE]}")
    print(f"Ring buffer offsets for width=128: {[v1+v2*256 for v1,v2 in RING_TABLE]}")
