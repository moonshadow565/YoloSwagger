using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolSummonerGameloopPlayerInfoV1
    {
        [DataMember(Name = "autoFillDataBagByQueueId")]
        dynamic AutoFillDataBagByQueueId { get; set; }

        [DataMember(Name = "rerollDataBag")]
        LolSummonerRerollDataBagForClientV1 RerollDataBag { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSummonerGameloopPlayerInfoV1 {\n");
            sb.Append("  AutoFillDataBagByQueueId: ").Append(AutoFillDataBagByQueueId).Append("\n");
            sb.Append("  RerollDataBag: ").Append(RerollDataBag).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}