import cv2
import datetime

cap = cv2.VideoCapture(0)
cap = cv2.VideoCapture('Videos\kitten.mp4')
print(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
print(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
cap.set(3, 640)
cap.set(4, 360)

while cap.isOpened():
    ret, frame = cap.read()
    if ret:
        font = cv2.FONT_HERSHEY_SIMPLEX
        text = 'Width : ' + str(cap.get(3)) + ' Height : ' + str(cap.get(4))
        datet = str(datetime.datetime.now())
        frame = cv2.putText(frame, text, (10, 50), font, 1, (255, 0, 0), 2, cv2.LINE_AA)
        frame = cv2.putText(frame, datet, (10, 100), font, 1, (255, 0, 0), 2, cv2.LINE_AA)
        cv2.imshow('frame', frame)

        if cv2.waitKey(20) & 0xFF == ord('q'):
            break
    else:
        break

cap.release()
cv2.destroyAllWindows()
