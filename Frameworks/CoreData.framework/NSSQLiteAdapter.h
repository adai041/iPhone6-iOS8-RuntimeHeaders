/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface NSSQLiteAdapter : NSSQLAdapter  {
    NSString *_dbpath;
}


- (id)type;
- (void)dealloc;
- (id)pathnameForDatabase;
- (id)sqliteVersion;
- (id)createConnection;
- (id)initWithSQLCore:(id)arg1;
- (id)typeStringForSQLType:(unsigned int)arg1;
- (id)typeStringForColumn:(id)arg1;
- (Class)statementClass;
- (bool)supportsCorrelatedSubqueries;

@end
