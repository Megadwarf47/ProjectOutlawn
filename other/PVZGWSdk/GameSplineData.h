///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CustomSplineData.h>
#include <fb/Vec3.h>

namespace fb {
	class GameSplineData : public CustomSplineData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameSplineData"); }
		virtual ~GameSplineData() override {}
		GameSplineData() {

			m_allowRoll = true;
		};

		Array<Vec3> m_normals; // 0x28 (40)
	}; // 0x30 (48)
}

