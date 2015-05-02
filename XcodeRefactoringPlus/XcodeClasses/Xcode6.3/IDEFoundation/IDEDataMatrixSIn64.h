//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDataMatrixSIn64 : IDEDataMatrix
{
    struct vector<long long, std::__1::allocator<long long>> *_columns;
}

- (unsigned long long)rowCount;
- (void)executeRowOperation:(const struct _IDEDataMatrixRowOp *)arg1 overColumns:(id)arg2;
- (long long)SInt64AtRow:(unsigned long long)arg1 column:(unsigned char)arg2;
- (void)addSInt64Rows:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateInt64Range:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1 descriptor:(struct _IDEDataMatrixDescriptor *)arg2;

@end