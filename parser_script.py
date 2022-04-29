from math import ceil
import sys

# border length of lines and trasfer it on another line
def handle_text(text: str, border_len: int):
    lines = text.split('\n')
    new_text = []
    for line in lines:
        words = line.split(' ')
        new_line = ""
        for word in words:
            if len(new_line) + len(word) > border_len:
                new_text.append(new_line)
                new_line = ""
            new_line += f"{word} "
        if new_line and new_line != " ":
            new_text.append(new_line)
    return new_text

# add first and last lines
def add_format(lines: list):
    first_line = "/* Condition: \n *\n"
    end_line = "\n **/"
    lines = list(map(lambda line: f" * {line}", lines))
    return first_line + "\n".join(lines) + end_line

# text without empty lines
def input_text():
    text = ""
    for line in sys.stdin:
        if line != "\n":
            text += line
    return text


if __name__ == "__main__":
    customer_text = input_text()
    # 3 start symbols and 77 for text
    split_text = handle_text(customer_text, 77)
    format_text = add_format(split_text)
    open("condition.txt", "w").write(format_text)
