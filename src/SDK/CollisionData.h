///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/ValueAtX.h>

namespace fb {
	class CollisionData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CollisionData"); }
		virtual ~CollisionData() override {}
		CollisionData() {
		};

		Array<ValueAtX> m_damageAtVerticalVelocity; // 0x10 (16)
		Array<ValueAtX> m_damageAtHorizVelocity; // 0x18 (24)
	}; // 0x20 (32)
}

