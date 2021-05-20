#!/usr/bin/env python

import cv2 as cv

path = ("/home/khaled/openCvPYCPP/python/original (10).jpg")
img = cv.imread(path, cv.IMREAD_GRAYSCALE)
cv.imshow("bla", img)
k = cv.waitKey(5000)
if k == ord("s"):
    cv.imwrite("original (10).png", img)