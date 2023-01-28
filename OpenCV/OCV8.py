import numpy as np
import cv2

def nothing(x):
    pass


# Create a black image, a window
img = np.zeros((250, 500, 3), np.uint8)
cv2.namedWindow('image')
cv2.createTrackbar('h', 'image', 0, 180, nothing)
cv2.createTrackbar('s', 'image', 0, 255, nothing)
cv2.createTrackbar('v', 'image', 0, 255, nothing)

while 1:

    b = cv2.getTrackbarPos('h', 'image')
    g = cv2.getTrackbarPos('s', 'image')
    r = cv2.getTrackbarPos('v', "image")

    img[:] = [b, g, r]

    cv2.imshow('image', img)
    key = cv2.waitKey(1)
    if key == 27:
        break

cv2.destroyAllWindows()
