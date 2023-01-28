import cv2

cap = cv2.VideoCapture('Videos\\dog.mp4')

while True:
    isTrue, frame = cap.read()
    cv2.imshow('Video', frame)
    if cv2.waitKey(20) & 0xFF == ord('d'):
        break

cap.release()
cv2.destroyAllWindows()
