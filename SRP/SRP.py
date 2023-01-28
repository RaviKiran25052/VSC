from gtts import gTTS
import os
from googletrans import Translator

trans = Translator()
t = trans.translate("How are you", dest="te", src="en")
audio = gTTS(text=t.text, lang="te", slow=False)

audio.save("example.mp3")
os.system("start example.mp3")
