///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffStateControllerData.h>
#include <fb/CtrRef.h>

namespace fb {
	class InputRestrictionAsset;
}

namespace fb {
	class PVZBuffStateControllerData : public BuffStateControllerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZBuffStateControllerData"); }
		virtual ~PVZBuffStateControllerData() override {}
		PVZBuffStateControllerData() {
			m_killOnManDown = false;
		};

		CtrRef<InputRestrictionAsset> m_cancelInput; // 0x10 (16)
		bool m_killOnManDown; // 0x18 (24)
	}; // 0x20 (32)
}

