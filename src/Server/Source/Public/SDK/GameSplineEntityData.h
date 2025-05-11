///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameComponentEntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class GameSplineEntityData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameSplineEntityData"); }
		virtual ~GameSplineEntityData() override {}
		GameSplineEntityData() {
		};

		Array<Vec3> m_localPoints; // 0x80 (128)
		Array<Vec3> m_normals; // 0x88 (136)
	}; // 0x90 (144)
}

