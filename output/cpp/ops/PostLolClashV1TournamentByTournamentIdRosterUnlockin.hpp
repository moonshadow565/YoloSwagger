#pragma once
#include "../client.hpp"
namespace leagueapi {
  nlohmann::json PostLolClashV1TournamentByTournamentIdRosterUnlockin (const ClientInfo& info,
    const int64_t& tournamentId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-clash/v1/tournament/"+UrlCode::encode(to_string(tournamentId))+"/roster/unlockin";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
