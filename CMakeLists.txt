cmake_minimum_required(VERSION 3.8)
project(FrameProject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CSV/CSVReader.cpp CSV/CSVReader.h CSV/FileNotFoundException.cpp CSV/FileNotFoundException.h Repositories/GroundTruthRepository.cpp Repositories/GroundTruthRepository.h Repositories/Models/GroundTruth.cpp Repositories/Models/GroundTruth.h CSV/IDataReader.h Repositories/Models/Candidate.cpp Repositories/Models/Candidate.h Repositories/CandidatesRepository.cpp Repositories/CandidatesRepository.h FrameResolver.cpp FrameResolver.h Report.cpp Report.h)
add_executable(FrameProject ${SOURCE_FILES})