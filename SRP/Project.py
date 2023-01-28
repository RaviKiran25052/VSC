from gtts import gTTS
from googletrans import Translator
import speech_recognition as sr
import pytesseract as pytesseract
import pytesseract as tess
from PIL import Image
import os

pytesseract.pytesseract.tesseract_cmd = "C:\\Users\\Ravi\\AppData\\Local\\Tesseract-OCR\\tesseract.exe"


def I2T():
    img = Image.open("SampleImage2.jpg")
    text = tess.image_to_string(img)
    print("The text was : " + text)


def T2S():
    text = input("Enter your Message : ")
    content = "This Text is converted to speech...!"
    audio = gTTS(text=text, lang="en", slow=False)
    audio.save("example.mp3")
    os.system("start example.mp3")


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


def T2T():
    l = "en"
    trans = Translator()
    message = input("Enter your message : ")
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
    t = trans.translate(message, dest=l, src="en")
    print(f'{t.origin} -> {t.text}')


def option(a):
    match a:
        case '0':
            I2T()
        case '1':
            T2S()
        case '2':
            S2T()
        case '3':
            T2T()
        case 'e' | 'E':
            exit(0)
        case default:
            print('Please enter correct option...!')


while 1:
    print("\n----------------------------------------------\n")
    print("0 -> Capture image and extract text.\n1 -> Listen to the text.")
    print("2 -> Send a message.\n3 -> Translate the message.\nE -> Escape\n")
    opt = input('Enter your option : ')
    option(opt)
