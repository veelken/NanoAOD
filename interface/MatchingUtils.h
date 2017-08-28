#ifndef NanoAOD_MatchingUtils_h
#define NanoAOD_MatchingUtils_h

/*#include <utility>
#include <vector>
#include "CommonTools/Utils/interface/StringCutObjectSelector.h"
*/
bool matchByCommonSourceCandidatePtr(const auto & c1, const auto & c2) {
    for(unsigned int i1 = 0 ; i1 < c1.numberOfSourceCandidatePtrs();i1++){
        auto  c1s=c1.sourceCandidatePtr(i1);
            for(unsigned int i2 = 0 ; i2 < c2.numberOfSourceCandidatePtrs();i2++) {
                if(c2.sourceCandidatePtr(i2)==c1s) return true;
            }
    }
    return false;
}
/*
template<typename I>
std::pair<const I &,float> bestMatch(auto item, auto targetColl,const StringCutObjectSelector<I> & cut="1") {
    float deltaR2Min = 9e99;
    const I & bm;
    for(const auto & t : targetColl){
	if(cut(t)) {
            float dR2 = deltaR2(item,t);
            if(dR2 < deltaR2Min){
                deltaR2Min = dR2;
                 bm = t;
   	    }
        }
    }
    return std::pair<const I &,float>(bm, deltaR2Min);
}


template<typename I>
std::vector<std::pair<const I &,float>> matchCollections(auto coll, auto targetColl,const StringCutObjectSelector<I> & cut="1") {
    std::vector<std::pair<I,float>> pairs;
    if(coll.empty()) return pairs;
    for(auto & p : coll){
	pairs.push_back(bestMatch(p,targetColl,cut));
    }
    return pairs;
}

*/

#endif
