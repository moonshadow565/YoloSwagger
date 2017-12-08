#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsInviter.hpp"
#include "LcdsInvitationState.hpp"
#include "LcdsPlayer.hpp"
namespace leagueapi {
  struct LcdsInvitationRequest_t {
    std::string inviteType;
    LcdsInvitationState_t invitationState;
    std::string invitePayload;
    std::string gameMetaData;
    std::string invitationId;
    LcdsPlayer_t owner;
    LcdsInviter_t inviter;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitationRequest_t& v) {
    j["inviteType"] = v.inviteType;
    j["invitationState"] = v.invitationState;
    j["invitePayload"] = v.invitePayload;
    j["gameMetaData"] = v.gameMetaData;
    j["invitationId"] = v.invitationId;
    j["owner"] = v.owner;
    j["inviter"] = v.inviter;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitationRequest_t& v) {
    v.inviteType = j.at("inviteType").get<std::string>();
    v.invitationState = j.at("invitationState").get<LcdsInvitationState_t>();
    v.invitePayload = j.at("invitePayload").get<std::string>();
    v.gameMetaData = j.at("gameMetaData").get<std::string>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.owner = j.at("owner").get<LcdsPlayer_t>();
    v.inviter = j.at("inviter").get<LcdsInviter_t>();
  }
  inline std::string to_string(const LcdsInvitationRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
