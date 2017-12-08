#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersKudoedPlayer_t {
    uint64_t_t kudoedSummonerId;
    std::string_t kudoedSummonerName;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersKudoedPlayer_t& v) {
    j["kudoedSummonerId"] = v.kudoedSummonerId;
    j["kudoedSummonerName"] = v.kudoedSummonerName;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersKudoedPlayer_t& v) {
    v.kudoedSummonerId = j.at("kudoedSummonerId").get<uint64_t_t>();
    v.kudoedSummonerName = j.at("kudoedSummonerName").get<std::string_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersKudoedPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
