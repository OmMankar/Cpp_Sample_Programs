cmake_minimum_required(VERSION 3.10)
project(mutex )
add_executable(mutex mutex.cpp)
add_executable(TimedLockable TimedLockable.cpp)
add_executable(uniqueLock uniqueLock.cpp)
add_executable(recursive_lock recursive_lock.cpp)

