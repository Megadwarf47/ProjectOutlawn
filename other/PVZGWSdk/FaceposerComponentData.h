///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/Array.h>
#include <fb/GameComponentData.h>
#include <fb/String.h>

namespace fb {
	class FaceposerComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FaceposerComponentData"); }
		virtual ~FaceposerComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		FaceposerComponentData() {
			m_lodDistance = 10.f;
			m_facePoseLibraryIndex = 0;
		};

		AntRef m_facePoserEnabled; // 0x70 (112)
		float m_lodDistance; // 0x84 (132)
		AntRef m_facePoseLibraryReference; // 0x88 (136)
		Array<AntRef> m_facePoseLibrary; // 0xA0 (160)
		String m_facePoserDofSetName; // 0xA8 (168)
		Array<String> m_shaderExposedValues; // 0xB0 (176)
		s32 m_facePoseLibraryIndex; // 0xB8 (184)
	}; // 0xC0 (192)
}

