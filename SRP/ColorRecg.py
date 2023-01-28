import cv2 as cv

cap = cv.VideoCapture(0)
cap.set(cv.CAP_PROP_FRAME_WIDTH, 1280)
cap.set(cv.CAP_PROP_FRAME_HEIGHT, 720)

ripe = not_ripe = damage = 0
while True:
    _, frame = cap.read()
    hsv_frame = cv.cvtColor(frame, cv.COLOR_BGR2HSV)
    height, width, _ = frame.shape

    cx = int(width / 2)
    cy = int(height / 2)

    # Pick pixel value
    pixel_center = hsv_frame[cy, cx]
    hue_value = pixel_center[0]

    color = "Undefined"
    if hue_value < 5 or hue_value > 165:
        color = "RED"
        ripe += 1
    elif hue_value < 78:
        color = "GREEN"
        not_ripe += 1
    elif hue_value > 80:
        color = "BLACK"
        damage += 1

    Riped = "No of Riped vegetables : " + str(ripe)
    NotRiped = "No of Not Riped vegetables : " + str(not_ripe)
    Damaged = "No of Damaged vegetables : " + str(damage)

    cv.rectangle(frame, (80, 40), (cx - 220, 100), (30, 50, 200), -1)
    cv.putText(frame, Riped, (110, 75), cv.FONT_HERSHEY_TRIPLEX, 0.5, (255, 255, 255), 1)
    cv.rectangle(frame, (cx - 180, 40), (cx + 160, 100), (30, 200, 150), -1)
    cv.putText(frame, NotRiped, (cx - 150, 75), cv.FONT_HERSHEY_TRIPLEX, 0.5, (255, 255, 255), 1)
    cv.rectangle(frame, (cx + 190, 40), (2 * cx - 100, 100), (20, 40, 100), -1)
    cv.putText(frame, Damaged, (cx + 225, 75), cv.FONT_HERSHEY_TRIPLEX, 0.5, (255, 255, 255), 1)

    cv.circle(frame, (cx, cy), 5, (25, 25, 25), 2)

    cv.imshow("Frame", frame)
    key = cv.waitKey(1)
    if key == 27:
        break

cap.release()
cv.destroyAllWindows()
