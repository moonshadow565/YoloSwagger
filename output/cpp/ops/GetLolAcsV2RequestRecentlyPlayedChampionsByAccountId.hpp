#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void GetLolAcsV2RequestRecentlyPlayedChampionsByAccountId (const ClientInfo& info,
    const uint64_t& accountId,
    const bool& force)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-acs/v2/request-recently-played-champions/"+UrlCode::encode(to_string(accountId))+"";
    Headers query;
      query["force"] = force;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
