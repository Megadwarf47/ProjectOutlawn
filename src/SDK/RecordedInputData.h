///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/InputRecorderTrackData.h>

namespace fb {
	class RecordedInputData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RecordedInputData"); }
		virtual ~RecordedInputData() override {}
		RecordedInputData() {
		};

		Array<InputRecorderTrackData> m_trackData; // 0x18 (24)
	}; // 0x20 (32)
}

