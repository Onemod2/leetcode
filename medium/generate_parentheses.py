# author @Onemod2

class Solution:
    def generate_bracket_combination(self, conteiner: list, seq: str,
                                     open: int, close: int, n: int):
        if open == n and close == n:
            conteiner.append(seq)
            return
        if open != n:
            self.generate_bracket_combination(conteiner, seq + "(", open + 1, close, n)
        if open > close:
            self.generate_bracket_combination(conteiner, seq + ")", open, close + 1, n)

    def generate_parenthesis(self, n: int) -> list:
        cont = []
        self.generate_bracket_combination(cont, "", 0, 0, n)
        return cont


# Condition:
#
# Given n pairs of parentheses, write a function to generate all combinations
# of well-formed parentheses.


if __name__ == "__main__":
    pass
    # Input: n = 3
    # Output: ["((()))","(()())","(())()","()(())","()()()"]
    # Input: n = 1
    # Output: ["()"]
    # Input:
    # Output:
