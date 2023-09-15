obj = new CHECK_GIVEN_SENTENCE_GIVEN_SET_SIMPLE_GRAMMER_RULES();
let param0 =["I love cinema.", "The vertex is S.",
"I am single.", "My name is KG.",
"I lovE cinema.", "GeeksQuiz. is a quiz site.",
"I love Geeksquiz and Geeksforgeeks.",
"  You are my friend.", "I love cinema", "Hello world !"];
for(let i = 0; i < param0.length; ++i) {
    print(obj.C_G_S_G_S_S_G_R_f_gold(param0[i]))
}
obj.C_G_S_G_S_S_G_R_f_gold(-1)