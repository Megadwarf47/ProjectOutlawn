///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class EdgeDetectComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EdgeDetectComponentData"); }
		virtual ~EdgeDetectComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		EdgeDetectComponentData() {
			m_realm = Realm::Realm_Client;
			m_edgeThickness = 2.5f;
			m_edgeDepthTest = 0.01f;
			m_edgeFadeDistance = 0.01f;
			m_edgeOpacity = 0.7f;
			m_enable = false;
			m_debugMode = false;
		};

		Realm m_realm; // 0x80 (128)
		float m_edgeThickness; // 0x84 (132)
		float m_edgeDepthTest; // 0x88 (136)
		float m_edgeFadeDistance; // 0x8C (140)
		float m_edgeOpacity; // 0x90 (144)
		bool m_enable; // 0x94 (148)
		bool m_debugMode; // 0x95 (149)
	}; // 0xA0 (160)
}

