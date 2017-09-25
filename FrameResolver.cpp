//
// Created by AVAG_inc on 22.09.2017.
//

#include <algorithm>
#include "FrameResolver.h"
#include "Math/Rectangle.h"
#include "Math/InterSection.h"

FrameResolver::FrameResolver(GroundTruthRepository groundTruthRepository, CandidatesRepository candidatesRepository) {

    //TODO: algorithm of detection here


    auto groupedGround = candidatesRepository.groupByFrameAndClass();

    for(auto &item: groupedGround)
    {
        std::cout << "Frame:" <<item.first << std::endl;

        for(auto &byClass: item.second)
        {
            std::cout << "  " << byClass.first << " count: " << byClass.second.size() <<std::endl;

            for(auto &elem: byClass.second)
            std::cout << "      " << elem.getConfidence() << std::endl;

        }
    }














//    auto allGround = groundTruthRepository.findAll();
//
//    for(auto &ground: allGround)
//    {
//
//        auto passibleCandidates = candidatesRepository.findByFrameAndClass(ground.getFrameNumber(),ground.getClassName());
//
//        for(auto &candidate: passibleCandidates)
//        {
//
//          std::cout << "GtFrame: "
//                    << ground.getFrameNumber()
//                    << " class: "
//                    << ground.getClassName()
//                    << " box: "
//                    << ground.getLeft() <<" "<<ground.getTop()<<" "<<ground.getWidth()<<" "<<ground.getHeight()
//                    << " CndFrame: "
//                    << candidate.getFrameNumber()
//                    << " class: "
//                    << candidate.getClassName()
//                    << " conf: "
//                    << candidate.getConfidence()
//                    << " box: "
//                    << candidate.getLeft() <<" "<<candidate.getTop()<<" "<<candidate.getWidth()<<" "<<candidate.getHeight()
//                    << "\n";
//
//            Rectangle a(ground.getTop(),ground.getLeft(),ground.getWidth(),ground.getHeight());
//            Rectangle b(candidate.getTop(),candidate.getLeft(),candidate.getWidth(),candidate.getHeight());
//
//            InterSection interSection(a,b);
//
//            if(interSection.isInterSected())
//            {
//
//                double detected = (double) interSection.getInterSectedArea() / (double) interSection.getUnionArea();
//
//                std::cout
//                        << "IntersectedArea: "
//                        << interSection.getInterSectedArea()
//                        << " UnionArea: "
//                        << interSection.getUnionArea()
//                        << " GroundArea: "
//                        << a.Area()
//                        << " CandidateArea: "
//                        << b.Area()
//                        << " Detection: "
//                        << detected
//                        << "\n";
//
//
//            }
//
//
//
//        }
//
//    }

}

Report FrameResolver::getReport() {
    return this->report;
}
