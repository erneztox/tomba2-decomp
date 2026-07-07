CC1 := tools/old-gcc/cc1
MASPSX := python3 tools/maspsx/maspsx.py
AS := mips-linux-gnu-as

CFLAGS := -quiet -O2 -G 0
ASPSX_FLAGS := --aspsx-version=2.79 --run-assembler --gnu-as-path $(AS) -EL

SRC_FILES := $(wildcard src/*.c)
OBJ_FILES := $(patsubst src/%.c, build/src/%.o, $(SRC_FILES))

all: $(OBJ_FILES)

build/src/%.s: src/%.c
	@mkdir -p $(dir $@)
	$(CC1) $(CFLAGS) $< -o $@

build/src/%.o: build/src/%.s
	$(MASPSX) $(ASPSX_FLAGS) -o $@ $<

clean:
	rm -rf build/

.PHONY: all clean
