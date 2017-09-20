//
// Created by alex on 9/20/17.
//

#include "CandidatesRepository.h"

CandidatesRepository::CandidatesRepository(IDataReader &dataReader) {
    dataReader.exportData();
}
