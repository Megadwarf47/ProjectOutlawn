///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZCommanderActionBaseData.h>

namespace fb {
	class PVZCaptureActionData : public PVZCommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZCaptureActionData"); }
		virtual ~PVZCaptureActionData() override {}
		PVZCaptureActionData() {
			m_actionType = PVZCommanderActionType::PVZCommanderActionType_Capture;
		};

	}; // 0x30 (48)
}

