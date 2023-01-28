from gtts import gTTS
from googletrans import Translator
import speech_recognition as sr
import pytesseract as pytesseract
import pytesseract as tess
from PIL import Image
import os

pytesseract.pytesseract.tesseract_cmd = "C:\\Users\\Ravi\\AppData\\Local\\Tesseract-OCR\\tesseract.exe"

def I2T():
    img = Image.open("text.png")
    text = tess.image_to_string(img)
    print("The text was : ")
    print(text)
    lan = "en"
    ch = input("Want to translate : ")
    if ch == 'y':
        text, lan = T2T(text)
        T2S(text, lan)
    elif ch == 'n':
        T2S(text, lan)


def T2S(text, lan):
    audio = gTTS(text=text, lang=lan, slow=False)
    audio.save("voice.mp3")
    os.system("start voice.mp3")


def S2T():
    r = sr.Recognizer()
    mic = sr.Microphone()

    with mic as source:
        print('Say Something...!')
        audio = r.listen(source)
    print('end')
    try:
        print("\nYour message was : " + r.recognize_google(audio))
    except sr.UnknownValueError:
        print('could not understand audio...!')
    except sr.RequestError as e:
        print('could not recognize the audio...!', e)


def T2T(message):
    trans = Translator()
    print("\n0 -> Hindi.\n1 -> Telugu.")
    print("2 -> Tamil.\n")
    ip = int(input("In with language do you want : "))
    match ip:
        case 0:
            l = "hi"
        case 1:
            l = "te"
        case 2:
            l = "ta"
        case default:
            l = "en"
    t = trans.translate(message, dest=l, src="en")
    return t.text, l


def option(a):
    match a:
        case 'l' | 'L':
            I2T()
        case 's' | 'S':
            S2T()
        case 'e' | 'E':
            exit(0)
        case default:
            print('Please enter correct option...!')


while 1:
    print("\n----------------------------------------------\n")
    print("L -> Listen to the image\nS -> Send a message.\nE -> Escape\n")
    opt = input('Enter your option : ')
    option(opt)
