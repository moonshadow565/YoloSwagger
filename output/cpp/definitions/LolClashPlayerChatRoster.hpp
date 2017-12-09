#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashPlayerState.hpp"
#include "LolClashTournamentState.hpp"
namespace leagueapi {
  struct LolClashPlayerChatRoster_t {
    std::string name;
    int64_t tournamentId;
    int32_t iconId;
    int64_t startTimeMs;
    std::string shortName;
    int32_t iconColorId;
    bool isRegistered;
    LolClashPlayerState_t playerState;
    int64_t endTimeMs;
    LolClashTournamentState_t tournamentState;
    std::string key;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerChatRoster_t& v) {
    j["name"] = v.name;
    j["tournamentId"] = v.tournamentId;
    j["iconId"] = v.iconId;
    j["startTimeMs"] = v.startTimeMs;
    j["shortName"] = v.shortName;
    j["iconColorId"] = v.iconColorId;
    j["isRegistered"] = v.isRegistered;
    j["playerState"] = v.playerState;
    j["endTimeMs"] = v.endTimeMs;
    j["tournamentState"] = v.tournamentState;
    j["key"] = v.key;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerChatRoster_t& v) {
    v.name = j.at("name").get<std::string>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.iconId = j.at("iconId").get<int32_t>();
    v.startTimeMs = j.at("startTimeMs").get<int64_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.isRegistered = j.at("isRegistered").get<bool>();
    v.playerState = j.at("playerState").get<LolClashPlayerState_t>();
    v.endTimeMs = j.at("endTimeMs").get<int64_t>();
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState_t>();
    v.key = j.at("key").get<std::string>();
  }
  inline std::string to_string(const LolClashPlayerChatRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
