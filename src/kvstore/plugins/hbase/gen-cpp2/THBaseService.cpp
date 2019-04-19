/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "./gen-cpp2/THBaseService.h"
#include "./gen-cpp2/THBaseService.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

namespace apache { namespace hadoop { namespace hbase { namespace thrift2 { namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> THBaseServiceSvIf::getProcessor() {
  return std::make_unique<THBaseServiceAsyncProcessor>(this);
}

bool THBaseServiceSvIf::exists(const std::string& /*table*/, const  ::apache::hadoop::hbase::thrift2::cpp2::TGet& /*tget*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("exists");
}

folly::Future<bool> THBaseServiceSvIf::future_exists(const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TGet& tget) {
  return apache::thrift::detail::si::future([&] { return exists(table, tget); });
}

void THBaseServiceSvIf::async_eb_exists(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TGet& tget) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), tget = std::move(tget)]() mutable { return future_exists(table, tget); });
}

void THBaseServiceSvIf::existsAll(std::vector<bool>& /*_return*/, const std::string& /*table*/, const std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TGet>& /*tgets*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("existsAll");
}

folly::Future<std::vector<bool>> THBaseServiceSvIf::future_existsAll(const std::string& table, const std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TGet>& tgets) {
  return apache::thrift::detail::si::future_returning([&](std::vector<bool>& _return) { existsAll(_return, table, tgets); });
}

void THBaseServiceSvIf::async_eb_existsAll(std::unique_ptr<apache::thrift::HandlerCallback<std::vector<bool>>> callback, const std::string& table, const std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TGet>& tgets) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), tgets = std::move(tgets)]() mutable { return future_existsAll(table, tgets); });
}

void THBaseServiceSvIf::get( ::apache::hadoop::hbase::thrift2::cpp2::TResult& /*_return*/, const std::string& /*table*/, const  ::apache::hadoop::hbase::thrift2::cpp2::TGet& /*tget*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("get");
}

folly::Future< ::apache::hadoop::hbase::thrift2::cpp2::TResult> THBaseServiceSvIf::future_get(const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TGet& tget) {
  return apache::thrift::detail::si::future_returning([&]( ::apache::hadoop::hbase::thrift2::cpp2::TResult& _return) { get(_return, table, tget); });
}

void THBaseServiceSvIf::async_eb_get(std::unique_ptr<apache::thrift::HandlerCallback< ::apache::hadoop::hbase::thrift2::cpp2::TResult>> callback, const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TGet& tget) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), tget = std::move(tget)]() mutable { return future_get(table, tget); });
}

void THBaseServiceSvIf::getMultiple(std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TResult>& /*_return*/, const std::string& /*table*/, const std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TGet>& /*tgets*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getMultiple");
}

folly::Future<std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TResult>> THBaseServiceSvIf::future_getMultiple(const std::string& table, const std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TGet>& tgets) {
  return apache::thrift::detail::si::future_returning([&](std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TResult>& _return) { getMultiple(_return, table, tgets); });
}

void THBaseServiceSvIf::async_eb_getMultiple(std::unique_ptr<apache::thrift::HandlerCallback<std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TResult>>> callback, const std::string& table, const std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TGet>& tgets) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), tgets = std::move(tgets)]() mutable { return future_getMultiple(table, tgets); });
}

void THBaseServiceSvIf::put(const std::string& /*table*/, const  ::apache::hadoop::hbase::thrift2::cpp2::TPut& /*tput*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("put");
}

folly::Future<folly::Unit> THBaseServiceSvIf::future_put(const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TPut& tput) {
  return apache::thrift::detail::si::future([&] { return put(table, tput); });
}

void THBaseServiceSvIf::async_eb_put(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TPut& tput) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), tput = std::move(tput)]() mutable { return future_put(table, tput); });
}

bool THBaseServiceSvIf::checkAndPut(const std::string& /*table*/, const std::string& /*row*/, const std::string& /*family*/, const std::string& /*qualifier*/, const std::string& /*value*/, const  ::apache::hadoop::hbase::thrift2::cpp2::TPut& /*tput*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("checkAndPut");
}

folly::Future<bool> THBaseServiceSvIf::future_checkAndPut(const std::string& table, const std::string& row, const std::string& family, const std::string& qualifier, const std::string& value, const  ::apache::hadoop::hbase::thrift2::cpp2::TPut& tput) {
  return apache::thrift::detail::si::future([&] { return checkAndPut(table, row, family, qualifier, value, tput); });
}

void THBaseServiceSvIf::async_eb_checkAndPut(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, const std::string& table, const std::string& row, const std::string& family, const std::string& qualifier, const std::string& value, const  ::apache::hadoop::hbase::thrift2::cpp2::TPut& tput) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), row = std::move(row), family = std::move(family), qualifier = std::move(qualifier), value = std::move(value), tput = std::move(tput)]() mutable { return future_checkAndPut(table, row, family, qualifier, value, tput); });
}

void THBaseServiceSvIf::putMultiple(const std::string& /*table*/, const std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TPut>& /*tputs*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("putMultiple");
}

folly::Future<folly::Unit> THBaseServiceSvIf::future_putMultiple(const std::string& table, const std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TPut>& tputs) {
  return apache::thrift::detail::si::future([&] { return putMultiple(table, tputs); });
}

void THBaseServiceSvIf::async_eb_putMultiple(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, const std::string& table, const std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TPut>& tputs) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), tputs = std::move(tputs)]() mutable { return future_putMultiple(table, tputs); });
}

void THBaseServiceSvIf::deleteSingle(const std::string& /*table*/, const  ::apache::hadoop::hbase::thrift2::cpp2::TDelete& /*tdelete*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("deleteSingle");
}

folly::Future<folly::Unit> THBaseServiceSvIf::future_deleteSingle(const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TDelete& tdelete) {
  return apache::thrift::detail::si::future([&] { return deleteSingle(table, tdelete); });
}

void THBaseServiceSvIf::async_eb_deleteSingle(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TDelete& tdelete) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), tdelete = std::move(tdelete)]() mutable { return future_deleteSingle(table, tdelete); });
}

void THBaseServiceSvIf::deleteMultiple(std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TDelete>& /*_return*/, const std::string& /*table*/, const std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TDelete>& /*tdeletes*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("deleteMultiple");
}

folly::Future<std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TDelete>> THBaseServiceSvIf::future_deleteMultiple(const std::string& table, const std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TDelete>& tdeletes) {
  return apache::thrift::detail::si::future_returning([&](std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TDelete>& _return) { deleteMultiple(_return, table, tdeletes); });
}

void THBaseServiceSvIf::async_eb_deleteMultiple(std::unique_ptr<apache::thrift::HandlerCallback<std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TDelete>>> callback, const std::string& table, const std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TDelete>& tdeletes) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), tdeletes = std::move(tdeletes)]() mutable { return future_deleteMultiple(table, tdeletes); });
}

bool THBaseServiceSvIf::checkAndDelete(const std::string& /*table*/, const std::string& /*row*/, const std::string& /*family*/, const std::string& /*qualifier*/, const std::string& /*value*/, const  ::apache::hadoop::hbase::thrift2::cpp2::TDelete& /*tdelete*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("checkAndDelete");
}

folly::Future<bool> THBaseServiceSvIf::future_checkAndDelete(const std::string& table, const std::string& row, const std::string& family, const std::string& qualifier, const std::string& value, const  ::apache::hadoop::hbase::thrift2::cpp2::TDelete& tdelete) {
  return apache::thrift::detail::si::future([&] { return checkAndDelete(table, row, family, qualifier, value, tdelete); });
}

void THBaseServiceSvIf::async_eb_checkAndDelete(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, const std::string& table, const std::string& row, const std::string& family, const std::string& qualifier, const std::string& value, const  ::apache::hadoop::hbase::thrift2::cpp2::TDelete& tdelete) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), row = std::move(row), family = std::move(family), qualifier = std::move(qualifier), value = std::move(value), tdelete = std::move(tdelete)]() mutable { return future_checkAndDelete(table, row, family, qualifier, value, tdelete); });
}

void THBaseServiceSvIf::increment( ::apache::hadoop::hbase::thrift2::cpp2::TResult& /*_return*/, const std::string& /*table*/, const  ::apache::hadoop::hbase::thrift2::cpp2::TIncrement& /*tincrement*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("increment");
}

folly::Future< ::apache::hadoop::hbase::thrift2::cpp2::TResult> THBaseServiceSvIf::future_increment(const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TIncrement& tincrement) {
  return apache::thrift::detail::si::future_returning([&]( ::apache::hadoop::hbase::thrift2::cpp2::TResult& _return) { increment(_return, table, tincrement); });
}

void THBaseServiceSvIf::async_eb_increment(std::unique_ptr<apache::thrift::HandlerCallback< ::apache::hadoop::hbase::thrift2::cpp2::TResult>> callback, const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TIncrement& tincrement) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), tincrement = std::move(tincrement)]() mutable { return future_increment(table, tincrement); });
}

void THBaseServiceSvIf::append( ::apache::hadoop::hbase::thrift2::cpp2::TResult& /*_return*/, const std::string& /*table*/, const  ::apache::hadoop::hbase::thrift2::cpp2::TAppend& /*tappend*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("append");
}

folly::Future< ::apache::hadoop::hbase::thrift2::cpp2::TResult> THBaseServiceSvIf::future_append(const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TAppend& tappend) {
  return apache::thrift::detail::si::future_returning([&]( ::apache::hadoop::hbase::thrift2::cpp2::TResult& _return) { append(_return, table, tappend); });
}

void THBaseServiceSvIf::async_eb_append(std::unique_ptr<apache::thrift::HandlerCallback< ::apache::hadoop::hbase::thrift2::cpp2::TResult>> callback, const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TAppend& tappend) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), tappend = std::move(tappend)]() mutable { return future_append(table, tappend); });
}

int32_t THBaseServiceSvIf::openScanner(const std::string& /*table*/, const  ::apache::hadoop::hbase::thrift2::cpp2::TScan& /*tscan*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("openScanner");
}

folly::Future<int32_t> THBaseServiceSvIf::future_openScanner(const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TScan& tscan) {
  return apache::thrift::detail::si::future([&] { return openScanner(table, tscan); });
}

void THBaseServiceSvIf::async_eb_openScanner(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback, const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TScan& tscan) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), tscan = std::move(tscan)]() mutable { return future_openScanner(table, tscan); });
}

void THBaseServiceSvIf::getScannerRows(std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TResult>& /*_return*/, int32_t /*scannerId*/, int32_t /*numRows*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getScannerRows");
}

folly::Future<std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TResult>> THBaseServiceSvIf::future_getScannerRows(int32_t scannerId, int32_t numRows) {
  return apache::thrift::detail::si::future_returning([&](std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TResult>& _return) { getScannerRows(_return, scannerId, numRows); });
}

void THBaseServiceSvIf::async_eb_getScannerRows(std::unique_ptr<apache::thrift::HandlerCallback<std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TResult>>> callback, int32_t scannerId, int32_t numRows) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, scannerId, numRows]() mutable { return future_getScannerRows(scannerId, numRows); });
}

void THBaseServiceSvIf::closeScanner(int32_t /*scannerId*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("closeScanner");
}

folly::Future<folly::Unit> THBaseServiceSvIf::future_closeScanner(int32_t scannerId) {
  return apache::thrift::detail::si::future([&] { return closeScanner(scannerId); });
}

void THBaseServiceSvIf::async_eb_closeScanner(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t scannerId) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, scannerId]() mutable { return future_closeScanner(scannerId); });
}

void THBaseServiceSvIf::mutateRow(const std::string& /*table*/, const  ::apache::hadoop::hbase::thrift2::cpp2::TRowMutations& /*trowMutations*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mutateRow");
}

folly::Future<folly::Unit> THBaseServiceSvIf::future_mutateRow(const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TRowMutations& trowMutations) {
  return apache::thrift::detail::si::future([&] { return mutateRow(table, trowMutations); });
}

void THBaseServiceSvIf::async_eb_mutateRow(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TRowMutations& trowMutations) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), trowMutations = std::move(trowMutations)]() mutable { return future_mutateRow(table, trowMutations); });
}

void THBaseServiceSvIf::getScannerResults(std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TResult>& /*_return*/, const std::string& /*table*/, const  ::apache::hadoop::hbase::thrift2::cpp2::TScan& /*tscan*/, int32_t /*numRows*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getScannerResults");
}

folly::Future<std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TResult>> THBaseServiceSvIf::future_getScannerResults(const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TScan& tscan, int32_t numRows) {
  return apache::thrift::detail::si::future_returning([&](std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TResult>& _return) { getScannerResults(_return, table, tscan, numRows); });
}

void THBaseServiceSvIf::async_eb_getScannerResults(std::unique_ptr<apache::thrift::HandlerCallback<std::vector< ::apache::hadoop::hbase::thrift2::cpp2::TResult>>> callback, const std::string& table, const  ::apache::hadoop::hbase::thrift2::cpp2::TScan& tscan, int32_t numRows) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), tscan = std::move(tscan), numRows]() mutable { return future_getScannerResults(table, tscan, numRows); });
}

void THBaseServiceSvIf::getRegionLocation( ::apache::hadoop::hbase::thrift2::cpp2::THRegionLocation& /*_return*/, const std::string& /*table*/, const std::string& /*row*/, bool /*reload*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getRegionLocation");
}

folly::Future< ::apache::hadoop::hbase::thrift2::cpp2::THRegionLocation> THBaseServiceSvIf::future_getRegionLocation(const std::string& table, const std::string& row, bool reload) {
  return apache::thrift::detail::si::future_returning([&]( ::apache::hadoop::hbase::thrift2::cpp2::THRegionLocation& _return) { getRegionLocation(_return, table, row, reload); });
}

void THBaseServiceSvIf::async_eb_getRegionLocation(std::unique_ptr<apache::thrift::HandlerCallback< ::apache::hadoop::hbase::thrift2::cpp2::THRegionLocation>> callback, const std::string& table, const std::string& row, bool reload) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), row = std::move(row), reload]() mutable { return future_getRegionLocation(table, row, reload); });
}

void THBaseServiceSvIf::getAllRegionLocations(std::vector< ::apache::hadoop::hbase::thrift2::cpp2::THRegionLocation>& /*_return*/, const std::string& /*table*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getAllRegionLocations");
}

folly::Future<std::vector< ::apache::hadoop::hbase::thrift2::cpp2::THRegionLocation>> THBaseServiceSvIf::future_getAllRegionLocations(const std::string& table) {
  return apache::thrift::detail::si::future_returning([&](std::vector< ::apache::hadoop::hbase::thrift2::cpp2::THRegionLocation>& _return) { getAllRegionLocations(_return, table); });
}

void THBaseServiceSvIf::async_eb_getAllRegionLocations(std::unique_ptr<apache::thrift::HandlerCallback<std::vector< ::apache::hadoop::hbase::thrift2::cpp2::THRegionLocation>>> callback, const std::string& table) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table)]() mutable { return future_getAllRegionLocations(table); });
}

bool THBaseServiceSvIf::checkAndMutate(const std::string& /*table*/, const std::string& /*row*/, const std::string& /*family*/, const std::string& /*qualifier*/,  ::apache::hadoop::hbase::thrift2::cpp2::TCompareOp /*compareOp*/, const std::string& /*value*/, const  ::apache::hadoop::hbase::thrift2::cpp2::TRowMutations& /*rowMutations*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("checkAndMutate");
}

folly::Future<bool> THBaseServiceSvIf::future_checkAndMutate(const std::string& table, const std::string& row, const std::string& family, const std::string& qualifier,  ::apache::hadoop::hbase::thrift2::cpp2::TCompareOp compareOp, const std::string& value, const  ::apache::hadoop::hbase::thrift2::cpp2::TRowMutations& rowMutations) {
  return apache::thrift::detail::si::future([&] { return checkAndMutate(table, row, family, qualifier, compareOp, value, rowMutations); });
}

void THBaseServiceSvIf::async_eb_checkAndMutate(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, const std::string& table, const std::string& row, const std::string& family, const std::string& qualifier,  ::apache::hadoop::hbase::thrift2::cpp2::TCompareOp compareOp, const std::string& value, const  ::apache::hadoop::hbase::thrift2::cpp2::TRowMutations& rowMutations) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, table = std::move(table), row = std::move(row), family = std::move(family), qualifier = std::move(qualifier), compareOp, value = std::move(value), rowMutations = std::move(rowMutations)]() mutable { return future_checkAndMutate(table, row, family, qualifier, compareOp, value, rowMutations); });
}

const char* THBaseServiceAsyncProcessor::getServiceName() {
  return "THBaseService";
}

folly::Optional<std::string> THBaseServiceAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void THBaseServiceAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool THBaseServiceAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::unordered_set<std::string> THBaseServiceAsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> THBaseServiceAsyncProcessor::cacheKeyMap_ {};
const THBaseServiceAsyncProcessor::BinaryProtocolProcessMap& THBaseServiceAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const THBaseServiceAsyncProcessor::BinaryProtocolProcessMap THBaseServiceAsyncProcessor::binaryProcessMap_ {
  {"exists", &THBaseServiceAsyncProcessor::process_exists<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"existsAll", &THBaseServiceAsyncProcessor::process_existsAll<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"get", &THBaseServiceAsyncProcessor::process_get<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getMultiple", &THBaseServiceAsyncProcessor::process_getMultiple<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"put", &THBaseServiceAsyncProcessor::process_put<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"checkAndPut", &THBaseServiceAsyncProcessor::process_checkAndPut<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"putMultiple", &THBaseServiceAsyncProcessor::process_putMultiple<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"deleteSingle", &THBaseServiceAsyncProcessor::process_deleteSingle<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"deleteMultiple", &THBaseServiceAsyncProcessor::process_deleteMultiple<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"checkAndDelete", &THBaseServiceAsyncProcessor::process_checkAndDelete<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"increment", &THBaseServiceAsyncProcessor::process_increment<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"append", &THBaseServiceAsyncProcessor::process_append<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"openScanner", &THBaseServiceAsyncProcessor::process_openScanner<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getScannerRows", &THBaseServiceAsyncProcessor::process_getScannerRows<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"closeScanner", &THBaseServiceAsyncProcessor::process_closeScanner<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mutateRow", &THBaseServiceAsyncProcessor::process_mutateRow<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getScannerResults", &THBaseServiceAsyncProcessor::process_getScannerResults<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getRegionLocation", &THBaseServiceAsyncProcessor::process_getRegionLocation<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getAllRegionLocations", &THBaseServiceAsyncProcessor::process_getAllRegionLocations<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"checkAndMutate", &THBaseServiceAsyncProcessor::process_checkAndMutate<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const THBaseServiceAsyncProcessor::CompactProtocolProcessMap& THBaseServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const THBaseServiceAsyncProcessor::CompactProtocolProcessMap THBaseServiceAsyncProcessor::compactProcessMap_ {
  {"exists", &THBaseServiceAsyncProcessor::process_exists<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"existsAll", &THBaseServiceAsyncProcessor::process_existsAll<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"get", &THBaseServiceAsyncProcessor::process_get<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getMultiple", &THBaseServiceAsyncProcessor::process_getMultiple<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"put", &THBaseServiceAsyncProcessor::process_put<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"checkAndPut", &THBaseServiceAsyncProcessor::process_checkAndPut<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"putMultiple", &THBaseServiceAsyncProcessor::process_putMultiple<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"deleteSingle", &THBaseServiceAsyncProcessor::process_deleteSingle<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"deleteMultiple", &THBaseServiceAsyncProcessor::process_deleteMultiple<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"checkAndDelete", &THBaseServiceAsyncProcessor::process_checkAndDelete<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"increment", &THBaseServiceAsyncProcessor::process_increment<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"append", &THBaseServiceAsyncProcessor::process_append<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"openScanner", &THBaseServiceAsyncProcessor::process_openScanner<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getScannerRows", &THBaseServiceAsyncProcessor::process_getScannerRows<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"closeScanner", &THBaseServiceAsyncProcessor::process_closeScanner<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mutateRow", &THBaseServiceAsyncProcessor::process_mutateRow<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getScannerResults", &THBaseServiceAsyncProcessor::process_getScannerResults<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getRegionLocation", &THBaseServiceAsyncProcessor::process_getRegionLocation<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getAllRegionLocations", &THBaseServiceAsyncProcessor::process_getAllRegionLocations<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"checkAndMutate", &THBaseServiceAsyncProcessor::process_checkAndMutate<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

}}}}} // apache::hadoop::hbase::thrift2::cpp2
namespace apache { namespace thrift {

}} // apache::thrift
