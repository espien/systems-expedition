# Write strcmp without standard library - Lessons learned

This one was the fastest! I read Beej's Chapter 7 just before. I think the combination of struggling with the previous exercises and reading the Chapter on strings really helped with this one. I didn't overthink or anything. I did use the standard library one to compare the output with my solutions output, since I was a bit unsure on when it's negative and when it's positive. But now I know!

## Lessons learned

1. `strcmp` compares lexicographically. It returns negative (-) values if `lhs` appears before `rhs` and vice versa. Zero (0) if the strings are equal.
2. `strcmp` also only compares the chars at the same index. I almost started overthinking due to this.
