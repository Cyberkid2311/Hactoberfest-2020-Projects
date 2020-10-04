# python3

#first of all you will need to import ImageGrab module from PIL library to grab the image
#but the point is how your program will get to know about this when you want to grab/capture image
#that's why you have to import keyboard library in which there is a function is_pressed which i will explain later
from PIL import ImageGrab
import keyboard

#calling this loop till user don't press x this will take screenshot every time user press c
while True:
  # is_pressed function of keyboard library  simply says that "Hey python program see this button is pressed by user just now"
	if keyboard.is_pressed('c'):
    # image is a object of which was returned by ImageGrab module's Grab function 
		image = ImageGrab.grab()
    
    #here we are simply saving the image in the same directory with the name capture and extension png 
		image.save("Capture.png")
    
    #stop the program once x is pressed
	elif keyboard.is_pressed('x'):
		break
    
    #go ahead otherwise
	else:
		pass

