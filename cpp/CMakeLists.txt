cmake_minimum_required(VERSION 2.8)
project( DisplayImage )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( DisplayImage window.cpp )
target_link_libraries( DisplayImage ${OpenCV_LIBS} )

add_executable( image imae.cpp )
target_link_libraries( image ${OpenCV_LIBS} )

add_executable( video video.cpp )
target_link_libraries( video ${OpenCV_LIBS} )