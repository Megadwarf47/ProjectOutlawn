///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class PVZBuffTrackingComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZBuffTrackingComponentData"); }
		virtual ~PVZBuffTrackingComponentData() override {}
		PVZBuffTrackingComponentData() {
		};

		CtrRef<BuffData> m_buff; // 0x70 (112)
	}; // 0x80 (128)
}

