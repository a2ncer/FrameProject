#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "CSV/CSVReader.h"
#include "Repositories/GroundTruthRepository.h"
#include "Repositories/CandidatesRepository.h"


void handleException(std::exception &exception);

int main() {

    std::cout << "FrameProject" << std::endl;

    try {

        CSVReader groundTruthReader("../od_gt.csv");

        CSVReader candidatesReader("../od_cnd.csv");

        GroundTruthRepository groundTruthRepository(groundTruthReader);

        CandidatesRepository candidatesRepository(candidatesReader);


    }
    catch (std::exception &e) {
        handleException(e);
    }

    return 0;
}

void handleException(std::exception &e) {

    std::cout << "Exception got: " << e.what() << std::endl;

}
