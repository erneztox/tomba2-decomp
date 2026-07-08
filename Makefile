CC1 := tools/old-gcc/cc1
MASPSX := python3 tools/maspsx/maspsx.py
AS := mips-linux-gnu-as

CFLAGS := -quiet -O2 -G 0
ASPSX_FLAGS := --aspsx-version=2.79 --run-assembler --gnu-as-path $(AS) -EL -I include/

SRC_FILES := $(wildcard src/*.c src/main/*.c src/scus/*.c)
OBJ_FILES := $(patsubst src/%.c, build/src/%.o, $(SRC_FILES))

all: $(OBJ_FILES)

build/src/%.s: src/%.c
	@mkdir -p $(dir $@)
	cpp -nostdinc -undef -I include/ $< | $(CC1) $(CFLAGS) -o $@

build/src/%.o: build/src/%.s
	$(MASPSX) $(ASPSX_FLAGS) -O2 -o $@ $<

expected/build/src/%.o: asm/%.s
	@mkdir -p $(dir $@)
	sed '1i .include "macro.inc"' $< > expected/build/src/temp_$(notdir $<)
	$(AS) -EL -I include/ expected/build/src/temp_$(notdir $<) -o $@
	rm expected/build/src/temp_$(notdir $<)

clean:
	rm -rf build/ expected/

diff: expected/build/src/$(DIR)/$(FUNC).o build/src/$(DIR)/$(FUNC).o
	python3 tools/asm-differ/diff.py --no-pager -mo -f build/src/$(DIR)/$(FUNC).o $(SYM)

.PHONY: all clean diff
