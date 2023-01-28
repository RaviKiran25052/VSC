import cv2 as cv

img = cv.imread('bg.jpg')
Riped = "No of Riped vegetables : " + str(1)
NotRiped = "No of Not Riped vegetables : " + str(0)
Damaged = "No of Damaged vegetables : " + str(0)
height, width, _ = img.shape
cx = int(width / 2)
cy = int(height / 2)
cv.rectangle(img, (80, 40), (cx - 220, 100), (200, 200, 200), -1)
cv.putText(img, Riped, (110, 75), cv.FONT_HERSHEY_TRIPLEX, 0.5, (95, 95, 95), 1)
cv.rectangle(img, (cx - 180, 40), (cx + 160, 100), (200, 200, 200), -1)
cv.putText(img, NotRiped, (cx - 150, 75), cv.FONT_HERSHEY_TRIPLEX, 0.5, (95, 95, 95), 1)
cv.rectangle(img, (cx + 190, 40), (2 * cx - 100, 100), (200, 200, 200), -1)
cv.putText(img, Damaged, (cx + 225, 75), cv.FONT_HERSHEY_TRIPLEX, 0.5, (95, 95, 95), 1)

cv.imshow(img)
cv.waitKey(0)
