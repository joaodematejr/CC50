import re

# Solicitando o texto ao usuário
text = input("Text: ")

# Contando o número de letras, palavras e frases no texto
num_letters = len(re.findall(r"\w", text))
num_words = len(re.findall(r"\w+", text))
num_sentences = len(re.findall(r"[.!?]", text))

# Calculando o índice de Coleman-Liau
L = num_letters / num_words * 100
S = num_sentences / num_words * 100
index = round(0.0588 * L - 0.296 * S - 15.8)

# Imprimindo o resultado
if index < 1:
    print("Before Grade 1")
elif index >= 16:
    print("Grade 16+")
else:
    print(f"Grade {index}")
