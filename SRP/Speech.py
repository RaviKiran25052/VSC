import pyttsx3

engine = pyttsx3.init()
engine.runAndWait()

engine.setProperty('rate', 150)

# VOICE
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[0].id)
def run():
   
	text = "This is a sample speech recognition..!"
	engine.say('Hello '+text)
	engine.runAndWait()
# engine.say('My current speaking rate is ' + str(rate))
run()


engine.save_to_file('Hello World', 'test.mp3')