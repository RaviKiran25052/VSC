import numpy as np
import cv2 as cv


def nothing(x):
    k = 0


# Create a black image, a window
cv.namedWindow('image')
cv.createTrackbar('CP', 'image', 10, 100, nothing)
cv.createTrackbar('color/gray', 'image', 0, 1, nothing)

while 1:
    img = cv.imread('Photos/lena.jpeg')
    pos = cv.getTrackbarPos('CP', 'image')
    font = cv.FONT_ITALIC
    cv.putText(img, str(pos), (50, 150), font, 3, (0, 0, 255), 5)

    k = cv.waitKey(1) & 0xFF
    if k == 27:
        break

    s = cv.getTrackbarPos('color/gray', 'image')
    if s == 0:
        pass
    else:
        img = cv.cvtColor(img, cv.COLOR_BGR2GRAY)

    img = cv.imshow('image', img)

cv.destroyAllWindows()
