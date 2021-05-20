#!/usr/bin/env python
import cv2 as cv
import sys
import numpy as np 



img = cv.imread("original (10).jpg")
if img is None:
    sys.exit("Could not read the image.")
cv.namedWindow("window",cv.WINDOW_NORMAL)
cv.imshow("window", img)
k = cv.waitKey(5000)
if k == ord("s"):
    cv.imwrite("original (10).png", img)
cv.destroyWindow("window")

out = np.hstack(img)
print(out)
