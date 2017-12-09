#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyMemberMetadataDto.hpp"
#include "LolLobbyPartyMemberRoleEnum.hpp"
#include "LolLobbyGameModeDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyMemberDto_t {
    std::optional<bool> canInvite;
    std::string puuid;
    uint64_t summonerId;
    LolLobbyPartyMemberMetadataDto_t metadata;
    std::optional<bool> ready;
    std::optional<LolLobbyGameModeDto_t> gameMode;
    std::string platformId;
    uint64_t accountId;
    LolLobbyPartyMemberRoleEnum_t role;
    std::optional<uint64_t> invitedBySummonerId;
    std::optional<uint64_t> inviteTimestamp;
    std::string partyId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyMemberDto_t& v) {
    if(v.canInvite)
      j["canInvite"] = *v.canInvite;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["metadata"] = v.metadata;
    if(v.ready)
      j["ready"] = *v.ready;
    if(v.gameMode)
      j["gameMode"] = *v.gameMode;
    j["platformId"] = v.platformId;
    j["accountId"] = v.accountId;
    j["role"] = v.role;
    if(v.invitedBySummonerId)
      j["invitedBySummonerId"] = *v.invitedBySummonerId;
    if(v.inviteTimestamp)
      j["inviteTimestamp"] = *v.inviteTimestamp;
    j["partyId"] = v.partyId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyMemberDto_t& v) {
    if(auto it = j.find("canInvite"); it != j.end() && !it->is_null())
      v.canInvite = it->get<bool>();
    v.puuid = j.at("puuid").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.metadata = j.at("metadata").get<LolLobbyPartyMemberMetadataDto_t>();
    if(auto it = j.find("ready"); it != j.end() && !it->is_null())
      v.ready = it->get<bool>();
    if(auto it = j.find("gameMode"); it != j.end() && !it->is_null())
      v.gameMode = it->get<LolLobbyGameModeDto_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.role = j.at("role").get<LolLobbyPartyMemberRoleEnum_t>();
    if(auto it = j.find("invitedBySummonerId"); it != j.end() && !it->is_null())
      v.invitedBySummonerId = it->get<uint64_t>();
    if(auto it = j.find("inviteTimestamp"); it != j.end() && !it->is_null())
      v.inviteTimestamp = it->get<uint64_t>();
    v.partyId = j.at("partyId").get<std::string>();
  }
  inline std::string to_string(const LolLobbyPartyMemberDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
