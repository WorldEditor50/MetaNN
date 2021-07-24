#ifndef DATA_BATCH_H
#define DATA_BATCH_H
#include "../facilities/category_tags.h"

namespace MetaNN
{
template<typename TElem, typename TDevice>
using BatchScalarSequence = StaticArray<TElem, TDevice, CategoryTags::BatchSequence, CategoryTags::Scalar>;

template<typename TElem, typename TDevice>
using BatchMatrixSequence = StaticArray<TElem, TDevice, CategoryTags::BatchSequence, CategoryTags::Matrix>;

template<typename TElem, typename TDevice>
using BatchThreeDArraySequence = StaticArray<TElem, TDevice, CategoryTags::BatchSequence, CategoryTags::ThreeDArray>;
}
#endif //DATA_BATCH_H
