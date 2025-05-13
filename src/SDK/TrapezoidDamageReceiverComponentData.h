///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class TrapezoidDamageReceiverComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TrapezoidDamageReceiverComponentData"); }
		virtual ~TrapezoidDamageReceiverComponentData() override {}
		TrapezoidDamageReceiverComponentData() {
			m_disableTrapezoidOcclusionCheck = false;
			m_useAABBCenterForTrapezoidCheck = false;
		};

		bool m_disableTrapezoidOcclusionCheck; // 0x70 (112)
		bool m_useAABBCenterForTrapezoidCheck; // 0x71 (113)
	}; // 0x80 (128)
}

