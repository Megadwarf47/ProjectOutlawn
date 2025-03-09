///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RecordTrackBaseData.h>

namespace fb {
	class RecordTrackChildrenData : public RecordTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RecordTrackChildrenData"); }
		virtual ~RecordTrackChildrenData() override {}
		RecordTrackChildrenData() {
			m_framesToSkipPerKey = 1;
		};

	}; // 0x38 (56)
}

