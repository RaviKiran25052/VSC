import cv2 as cv

capture = cv.VideoCapture('Videos\\dog.mp4')

def rescale(frame, scale):
    w = int(frame.shape[1] * scale)  # 1 refers to width
    h = int(frame.shape[0] * scale)  # 0 refers to height
    dimensions = (w, h)
    return cv.resize(frame, dimensions)

while True:
    isTrue, frame = capture.read()
    frame_resize = rescale(frame, 0.5)
    cv.imshow('Video_resize', frame_resize)
    if cv.waitKey(20) & 0xFF == ord('d'):
        break

capture.release()
cv.destroyAllWindows()