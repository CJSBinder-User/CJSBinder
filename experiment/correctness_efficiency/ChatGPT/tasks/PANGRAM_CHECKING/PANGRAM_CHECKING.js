obj = new PANGRAM_CHECKING();
let param0 =[
    "The quick brown fox jumps over the lazy dog ",
    "The quick brown fox jumps over the dog",
    "abcdefghijklmnopqrstuvwxyz",
    "AbcdefghijKlmnopqrstUVwxyz",
    "The quicK broWn fOX jumps over the laZYy dog ",
    "AbcdefghijKlmnopqrstVwxyz",
    "U",
    "397548458372",
    "11",
    "iwCiUFU r"];
for(let i = 0; i < param0.length; ++i) {
    print(obj.P_C_f_gold(param0[i]))
}
obj.P_C_f_gold(-1)