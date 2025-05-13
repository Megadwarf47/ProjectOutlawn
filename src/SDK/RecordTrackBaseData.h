///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LinkTrackData.h>

namespace fb {
	class RecordTrackBaseData : public LinkTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RecordTrackBaseData"); }
		virtual ~RecordTrackBaseData() override {}
		RecordTrackBaseData() {
			m_framesToSkipPerKey = 0;
		};

		s32 m_framesToSkipPerKey; // 0x30 (48)
	}; // 0x38 (56)
}

