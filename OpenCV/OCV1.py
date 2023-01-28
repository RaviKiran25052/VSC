import cv2 as cv

img = cv.imread('bg.jpg')
Riped = "No of Riped vegetables : " + str(1)
NotRiped = "No of Not Riped vegetables : " + str(1)
Damaged = "No of Damaged vegetables : " + str(1)
height, width, _ = img.shape
cx = int(width / 2)
cy = int(height / 2)
cv.rectangle(img, (100, 40), (cx - 530, 100), (200, 200, 200), -1)
cv.putText(img, Riped, (140, 75), cv.FONT_HERSHEY_TRIPLEX, 0.5, (95, 95, 95), 1)
cv.rectangle(img, (cx - 510, 40), (cx-180, 100), (200, 200, 200), -1)
cv.putText(img, NotRiped, (cx -480, 75), cv.FONT_HERSHEY_TRIPLEX, 0.5, (95, 95, 95), 1)
cv.rectangle(img, (cx -160, 40), (cx+200, 100), (200, 200, 200), -1)
cv.putText(img, Damaged, (cx -120, 75), cv.FONT_HERSHEY_TRIPLEX, 0.5, (95, 95, 95), 1)
cv.circle(img, (cx-350, cy-240), 5, (25, 25, 25), 2)
cv.imshow('Color_Recognizer', img)
cv.waitKey(0)
