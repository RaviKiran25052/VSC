from googletrans import Translator
translator = Translator()
t = "नमस्ते दुनिया"
ex = translator.detect(t)
print(ex.lang)